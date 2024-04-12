void fun()
{
  int entity_4 = 60;
  entity_4 = 60;
  char entity_2[entity_4] = "";
  char entity_0[69] = "";
  char* entity_3;
  char* entity_1;
  memset(entity_2, 'r', entity_4-1);
  entity_2[entity_4-1]='0';
  entity_3 = (char*)malloc(94*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'I', 69-1);
  entity_0[69-1]='0';
  strcpy(entity_3, entity_2);
}