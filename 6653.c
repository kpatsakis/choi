void fun()
{
  int entity_5 = 35;
  char entity_0[18] = "";
  entity_0 = NULL;
  char entity_7 = 'P';
  char* entity_8;
  memset(entity_0, 'D', 18-1);
  entity_0[18-1]='';
  entity_8 = (char*)malloc(33*sizeof(char));
  entity_8[33-1]='';
  memcpy(entity_8, entity_0, 18*sizeof(char));
}