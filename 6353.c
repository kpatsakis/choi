void fun()
{
  int entity_4 = 51;
  int entity_1 = 97;
  char* entity_9;
  char* entity_6;
  char* entity_3;
  char entity_2[95] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  memset(entity_2, 'c', 95-1);
  entity_2[95-1]='';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  strcpy(entity_9, entity_2);
}