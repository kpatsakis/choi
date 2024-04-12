void fun()
{
  int entity_1 = 72;
  char* entity_2;
  char* entity_4;
  char entity_9[25] = "";
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'r', 25-1);
  entity_9[25-1]='0';
  memcpy(entity_2, entity_9, 25*sizeof(char));
}