void fun()
{
  int entity_4 = 59;
  char* entity_7;
  char entity_3[70] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'q', 70-1);
  entity_3[70-1]='';
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[8-1]='';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[3-1]='';
  strcpy(entity_2, entity_3);
}