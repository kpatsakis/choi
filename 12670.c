void fun()
{
  int entity_5 = 66;
  int entity_7 = 73;
  char* entity_9;
  char* entity_4;
  char* entity_0;
  char entity_2[82] = "";
  memset(entity_2, 'W', 82-1);
  entity_2[82-1]='0';
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  entity_9 = (char*)malloc(61*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_4, entity_2, 82*sizeof(char));
}