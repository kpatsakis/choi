void fun()
{
  int entity_1 = 81;
  char entity_6[37] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'Z', 37-1);
  entity_6[37-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_6);
}