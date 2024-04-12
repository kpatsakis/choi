void fun()
{
  int entity_0 = 5;
  int entity_2 = 77;
  char entity_1[91] = "";
  char* entity_9;
  char entity_3[92] = "";
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'y', 91-1);
  entity_1[91-1]='0';
  memset(entity_3, 'F', 92-1);
  entity_3[92-1]='0';
  entity_2 = 74;
  strcpy(entity_9, entity_3);
}