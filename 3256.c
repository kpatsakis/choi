void fun()
{
  int entity_1 = 32;
  char entity_7[1] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_6;
  char* entity_0;
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[87-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[90-1]='';
  memset(entity_7, 'J', 1-1);
  entity_7[1-1]='';
  entity_1 = 100;
  memcpy(entity_6, entity_7, 1*sizeof(char));
}