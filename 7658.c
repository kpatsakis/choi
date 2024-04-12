void fun()
{
  int entity_0 = 52;
  char entity_2 = 'q';
  char* entity_8;
  char entity_4[92] = "";
  entity_4 = NULL;
  char entity_3[63] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_4, 'B', 92-1);
  entity_4[92-1]='';
  memset(entity_3, 'F', 63-1);
  entity_3[63-1]='';
  memcpy(entity_8, entity_3, 63*sizeof(char));
}