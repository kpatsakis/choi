void fun()
{
  int entity_3 = 76;
  char entity_8[90] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_1 = 'v';
  char entity_7 = 'I';
  memset(entity_8, 'K', 90-1);
  entity_8[90-1]='';
  entity_6 = (char*)malloc(74*sizeof(char));
  entity_6[74-1]='';
  entity_8[entity_3] = 't';
}