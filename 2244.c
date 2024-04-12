void fun()
{
  int entity_4 = 13;
  char* entity_6;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[66-1]='';
  memset(entity_3, 's', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[43] = 'E';
}