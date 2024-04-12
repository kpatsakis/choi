void fun()
{
  int entity_9 = 66;
  entity_9 = 24;
  char* entity_2;
  char entity_8[entity_9] = "";
  char* entity_0;
  char entity_6 = 'D';
  memset(entity_8, 'r', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[0]='0';
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, entity_9*sizeof(char));
}