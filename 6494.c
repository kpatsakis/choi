void fun()
{
  int entity_5 = 37;
  char* entity_6;
  char entity_3[83] = "";
  entity_3 = NULL;
  memset(entity_3, 'P', 83-1);
  entity_3[83-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  entity_3[entity_5] = 'Z';
}