void fun()
{
  int entity_8 = 97;
  char entity_1[90] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'N', 90-1);
  entity_1[90-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_1, 90*sizeof(char));
}