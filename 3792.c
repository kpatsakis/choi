void fun()
{
  int entity_1 = 69;
  entity_1 = 69;
  char* entity_2;
  char* entity_5;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_6[27] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[70-1]='';
  memset(entity_4, 'J', entity_1-1);
  entity_4[entity_1-1]='';
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[67-1]='';
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  memset(entity_6, 'r', 27-1);
  entity_6[27-1]='';
  strcpy(entity_2, entity_4);
}