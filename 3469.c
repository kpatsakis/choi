void fun()
{
  int entity_4 = 92;
  char* entity_9;
  char entity_0[94] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memset(entity_0, 'O', 94-1);
  entity_0[94-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  entity_4 = 42;
  memcpy(entity_6, entity_0, 94*sizeof(char));
}