void fun()
{
  int entity_4 = 91;
  char entity_6[67] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_6, 'j', 67-1);
  entity_6[67-1]='';
  strcpy(entity_2, entity_6);
}