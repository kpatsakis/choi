void fun()
{
  int entity_1 = 7;
  char entity_8[94] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_8, 'q', 94-1);
  entity_8[94-1]='';
  entity_1 = 47;
  memcpy(entity_2, entity_8, 94*sizeof(char));
}