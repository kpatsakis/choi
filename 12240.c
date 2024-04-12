void fun()
{
  int entity_7 = 26;
  int entity_9 = 46;
  char entity_2[70] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'e', 70-1);
  entity_2[70-1]='0';
  memcpy(entity_1, entity_2, 70*sizeof(char));
}