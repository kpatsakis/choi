void fun()
{
  int entity_5 = 60;
  entity_5 = 47;
  char entity_3[96] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  memset(entity_3, 'D', 96-1);
  entity_3[96-1]='';
  entity_3[entity_5] = 'U';
}