void fun()
{
  int entity_0 = 51;
  char entity_8 = 'Z';
  char entity_6 = 'J';
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'b', entity_0-1);
  entity_1[entity_0-1]='';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[3-1]='';
  memcpy(entity_2, entity_1, entity_0*sizeof(char));
}