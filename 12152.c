void fun()
{
  int entity_9 = 59;
  char* entity_3;
  char entity_0[entity_9] = "";
  char entity_4 = 'k';
  char* entity_1;
  char* entity_7;
  memset(entity_0, 'M', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[0]='0';
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_1, entity_0, entity_9*sizeof(char));
}