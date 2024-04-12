void fun()
{
  int entity_7 = 85;
  char* entity_9;
  char* entity_5;
  char entity_3[entity_7] = "";
  char* entity_2;
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[0]='0';
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'i', entity_7-1);
  entity_3[entity_7-1]='0';
  entity_7 = 76;
  strcpy(entity_2, entity_3);
}