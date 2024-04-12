void fun()
{
  int entity_6 = 25;
  char entity_1 = 'R';
  char* entity_4;
  char entity_3[5] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'F', 5-1);
  entity_3[5-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_3, 5*sizeof(char));
}