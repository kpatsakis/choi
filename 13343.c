void fun()
{
  int entity_9 = 76;
  char entity_3[entity_9] = "";
  char* entity_0;
  char entity_6 = 'r';
  char* entity_2;
  entity_0 = (char*)malloc(34*sizeof(char));
  entity_0[0]='0';
  entity_2 = (char*)malloc(5*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'o', entity_9-1);
  entity_3[entity_9-1]='0';
  entity_9 = 9;
  memcpy(entity_0, entity_3, entity_9*sizeof(char));
}