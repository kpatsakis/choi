void fun()
{
  int entity_4 = 28;
  char entity_3[68] = "";
  char entity_9 = 'P';
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'q', 68-1);
  entity_3[68-1]='0';
  memcpy(entity_2, entity_3, 68*sizeof(char));
}