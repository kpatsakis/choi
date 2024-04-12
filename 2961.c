void fun()
{
  int entity_9 = 22;
  char entity_8[50] = "";
  entity_8 = NULL;
  char entity_0 = 'Z';
  char entity_1 = 'f';
  char* entity_2;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_8, 'C', 50-1);
  entity_8[50-1]='';
  memcpy(entity_2, entity_8, 50*sizeof(char));
}