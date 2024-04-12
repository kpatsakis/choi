void fun()
{
  int entity_2 = 50;
  int entity_1 = 48;
  char* entity_5;
  char* entity_9;
  char* entity_3;
  char entity_7[26] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_7, 'M', 26-1);
  entity_7[26-1]='';
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[67-1]='';
  strcpy(entity_9, entity_7);
}