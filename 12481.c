void fun()
{
  int entity_1 = 61;
  int entity_9 = 69;
  int entity_4 = 76;
  char* entity_0;
  char entity_6[entity_9] = "";
  char* entity_2;
  memset(entity_6, 'r', entity_9-1);
  entity_6[entity_9-1]='0';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[0]='0';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_6, entity_9*sizeof(char));
}