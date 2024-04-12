void fun()
{
  char* entity_6;
  char* entity_3;
  char entity_8[66] = "";
  entity_8 = NULL;
  char entity_1[45] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[6-1]='';
  memset(entity_8, 'E', 66-1);
  entity_8[66-1]='';
  memset(entity_1, 'A', 45-1);
  entity_1[45-1]='';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  memcpy(entity_3, entity_1, 45*sizeof(char));
}