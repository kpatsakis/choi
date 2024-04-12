void fun()
{
  int entity_9 = 42;
  char* entity_4;
  char entity_2[89] = "";
  char* entity_1;
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 's', 89-1);
  entity_2[89-1]='0';
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_1, entity_2, 89*sizeof(char));
}