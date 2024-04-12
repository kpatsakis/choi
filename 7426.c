void fun()
{
  int entity_4 = 87;
  char* entity_3;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[80-1]='';
  memset(entity_5, 'l', entity_4-1);
  entity_5[entity_4-1]='';
  entity_4 = 20;
  entity_5[99] = 'Y';
}