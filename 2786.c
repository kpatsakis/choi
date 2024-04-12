void fun()
{
  int entity_1 = 70;
  char entity_7 = 'g';
  char* entity_9;
  char* entity_4;
  char entity_0[55] = "";
  entity_0 = NULL;
  memset(entity_0, 'C', 55-1);
  entity_0[55-1]='';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[37-1]='';
  memcpy(entity_9, entity_0, 55*sizeof(char));
}