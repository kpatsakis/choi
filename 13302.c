void fun()
{
  int entity_9 = 83;
  int entity_2 = 67;
  char entity_7[13] = "";
  char* entity_1;
  char entity_5[92] = "";
  memset(entity_7, 'z', 13-1);
  entity_7[13-1]='0';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'n', 92-1);
  entity_5[92-1]='0';
  entity_2 = 97;
  strcpy(entity_1, entity_5);
}