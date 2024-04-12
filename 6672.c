void fun()
{
  int entity_1 = 64;
  int entity_7 = 8;
  entity_7 = 16;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_6[92] = "";
  entity_6 = NULL;
  memset(entity_6, 'P', 92-1);
  entity_6[92-1]='';
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[51-1]='';
  memset(entity_4, 'Z', entity_7-1);
  entity_4[entity_7-1]='';
  entity_4[50] = 'l';
}