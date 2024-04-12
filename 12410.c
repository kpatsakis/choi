void fun()
{
  int entity_6 = 25;
  char* entity_4;
  char* entity_2;
  char entity_9[87] = "";
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'C', 87-1);
  entity_9[87-1]='0';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_9, 87*sizeof(char));
}