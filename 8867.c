void fun()
{
  int entity_9 = 65;
  char* entity_0;
  char* entity_8;
  char entity_2[31] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'u', 31-1);
  entity_2[31-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[84-1]='';
  memcpy(entity_3, entity_2, 31*sizeof(char));
}