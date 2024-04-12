void fun()
{
  int entity_4 = 6;
  char entity_6[79] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'D', 79-1);
  entity_6[79-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  strcpy(entity_2, entity_6);
}