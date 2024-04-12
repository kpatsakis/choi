void fun()
{
  int entity_5 = 35;
  char entity_0[79] = "";
  char* entity_7;
  char* entity_3;
  memset(entity_0, 'C', 79-1);
  entity_0[79-1]='0';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[0]='0';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 79*sizeof(char));
}