void fun()
{
  int entity_5 = 88;
  char entity_3[71] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[18-1]='';
  memset(entity_3, 't', 71-1);
  entity_3[71-1]='';
  entity_3[entity_5] = 'J';
}