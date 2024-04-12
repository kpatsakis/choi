void fun()
{
  int entity_0 = 66;
  char* entity_1;
  char entity_4[9] = "";
  char* entity_2;
  memset(entity_4, 'I', 9-1);
  entity_4[9-1]='0';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_1, entity_4, 9*sizeof(char));
}