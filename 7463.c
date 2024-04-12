void fun()
{
  int entity_0 = 51;
  char* entity_7;
  char entity_2 = 'I';
  char entity_3[1] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_7 = (char*)malloc(61*sizeof(char));
  entity_7[61-1]='';
  memset(entity_3, 'n', 1-1);
  entity_3[1-1]='';
  memcpy(entity_8, entity_3, 1*sizeof(char));
}