void fun()
{
  int entity_0 = 83;
  int entity_3 = 93;
  entity_0 = 2;
  char entity_7[94] = "";
  entity_7 = NULL;
  char* entity_8;
  char* entity_4;
  memset(entity_7, 'W', 94-1);
  entity_7[94-1]='';
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[32-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memcpy(entity_4, entity_7, 94*sizeof(char));
}