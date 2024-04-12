void fun()
{
  int entity_4 = 54;
  char* entity_6;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'W', entity_4-1);
  entity_3[entity_4-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  entity_3[25] = 'f';
}