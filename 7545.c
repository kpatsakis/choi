void fun()
{
  int entity_2 = 12;
  int entity_7 = 8;
  char entity_8[63] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'u', 63-1);
  entity_8[63-1]='';
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[2-1]='';
  entity_8[entity_2] = 'P';
}