void fun()
{
  int entity_2 = 33;
  char entity_0[68] = "";
  char* entity_5;
  char* entity_6;
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'k', 68-1);
  entity_0[68-1]='0';
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_0, 68*sizeof(char));
}