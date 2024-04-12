void fun()
{
  int entity_1 = 81;
  int entity_0 = 45;
  char entity_7[32] = "";
  entity_7 = NULL;
  char* entity_3;
  char* entity_8;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_7, 'o', 32-1);
  entity_7[32-1]='';
  entity_8 = (char*)malloc(33*sizeof(char));
  entity_8[33-1]='';
  memcpy(entity_3, entity_7, 32*sizeof(char));
}