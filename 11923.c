void fun()
{
  char* entity_9;
  char entity_4[68] = "";
  char entity_2 = 'y';
  char entity_1 = 'R';
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'B', 68-1);
  entity_4[68-1]='0';
  memcpy(entity_9, entity_4, 68*sizeof(char));
}