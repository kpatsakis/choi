void fun()
{
  int entity_2 = 51;
  int entity_3 = 5;
  char entity_7[83] = "";
  entity_7 = NULL;
  char entity_6 = 'U';
  char entity_1 = 'G';
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_7, 'b', 83-1);
  entity_7[83-1]='';
  memcpy(entity_8, entity_7, 83*sizeof(char));
}