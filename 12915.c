void fun()
{
  int entity_2 = 72;
  char entity_4[68] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'a', 68-1);
  entity_4[68-1]='0';
  memcpy(entity_1, entity_4, 68*sizeof(char));
}