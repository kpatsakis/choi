void fun()
{
  int entity_2 = 64;
  int entity_8 = 89;
  entity_2 = 67;
  char* entity_7;
  char entity_1[50] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_1, 'f', 50-1);
  entity_1[50-1]='';
  memcpy(entity_7, entity_1, 50*sizeof(char));
}