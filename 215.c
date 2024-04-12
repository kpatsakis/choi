void fun()
{
  int entity_2 = 35;
  char entity_1 = 'p';
  char entity_9 = 'Z';
  char* entity_8;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[69-1]='';
  memset(entity_3, 'I', entity_2-1);
  entity_3[entity_2-1]='';
  entity_3[79] = 'w';
}