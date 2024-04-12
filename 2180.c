void fun()
{
  int entity_1 = 63;
  char* entity_2;
  char entity_0[94] = "";
  entity_0 = NULL;
  char entity_6 = 'a';
  memset(entity_0, 'b', 94-1);
  entity_0[94-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memcpy(entity_2, entity_0, 94*sizeof(char));
}