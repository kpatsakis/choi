void fun()
{
  int entity_1 = 90;
  char entity_2[78] = "";
  char* entity_9;
  memset(entity_2, 'v', 78-1);
  entity_2[78-1]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  entity_1 = 26;
  memcpy(entity_9, entity_2, 78*sizeof(char));
}